<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output indent="yes"/>
  <xsl:strip-space elements="*"/>

  <xsl:template match="@*|node()">
    <xsl:copy>
      <xsl:apply-templates select="@*|node()"/>
    </xsl:copy>
  </xsl:template>

  <xsl:template match="@members|@location|@line|@mangled|File|Unimplemented|Converter"/>
  <xsl:template match="ReferenceType|CvQualifiedType|FunctionType|PointerType|Variable|Id2Type|TypeMapping|OperatorFunction"/>
  <xsl:template match="GCC_XML/Struct[@file!='f41']"/>
  <xsl:template match="GCC_XML/Enumeration"/>
  <xsl:template match="GCC_XML/Union"/>
  <xsl:template match="GCC_XML/Class"/>
  <xsl:template match="GCC_XML/Field"/>
  <xsl:template match="GCC_XML/Typedef"/>
  <xsl:template match="GCC_XML/FundamentalType"/>
  <xsl:template match="GCC_XML/ArrayType"/>

  <xsl:template match="@id|@context|@file|@type"/>

</xsl:stylesheet>