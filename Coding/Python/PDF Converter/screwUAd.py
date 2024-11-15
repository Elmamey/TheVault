import PyPDF2
from docx import Document

# 1. Open the PDF file
pdf_file = open("C:/Users/anton/Downloads/PAL/PAL Session 3 - Oct24th_Antonio .pdf", "rb")  # Replace "input.pdf" with your PDF file's name

# 2. Create a PDF reader object
pdf_reader = PyPDF2.PdfReader(pdf_file)

# 3. Create a Word document
doc = Document()

# 4. Extract text from the PDF
for page_num in range(len(pdf_reader.pages)):
    page = pdf_reader.pages[page_num]
    text = page.extract_text()

    # 5. Write the text to the Word document
    doc.add_paragraph(text)

# 6. Save the Word document
doc.save("output.docx")  # Replace "output.docx" with your desired output file name

# 7. Close the PDF file
pdf_file.close()
