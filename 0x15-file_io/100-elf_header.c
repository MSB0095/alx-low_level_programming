#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_elf(const char *file)
{
	int fd;
	Elf64_Ehdr elf_header;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", file);
		exit(98);
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header\n");
		exit(98);
	}

	printf("ELF Header:\n");
	printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0],
	elf_header.e_ident[EI_MAG1],
	elf_header.e_ident[EI_MAG2],
	elf_header.e_ident[EI_MAG3]);
	if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
		printf("Class: ELF32\n");
	else if (elf_header.e_ident[EI_CLASS] == ELFCLASS64)
		printf("Class: ELF64\n");
	printf("Data: %s\n",
	elf_header.e_ident[EI_DATA] == ELFDATA2LSB ?
	"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n",
	elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
	"UNIX System V ABI" : "Unknown");
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: 0x%lx\n", elf_header.e_entry);

	close(fd);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	print_elf(argv[1]);

	return (0);
}
