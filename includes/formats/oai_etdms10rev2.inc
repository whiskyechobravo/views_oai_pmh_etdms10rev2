<?php

/**
 * Definition of the Interoperability Metadata Standard for Electronic Theses
 * and Dissertations (ETD-MS) v1.00 revision 2 data format.
 */
class views_oai_pmh_etdms10rev2_format_oai_etdms10rev2 extends views_oai_pmh_format {
  public function __construct() {
    parent::__construct('oai_etdms10rev2', t('Interoperability Metadata Standard for Electronic Theses and
  Dissertations (ETD-MS) v1.00 revision 2'));

    $this->schema = 'http://www.ndltd.org/standards/metadata/etdms/1.0/etdms.xsd';

    $this->namespaces = array(
      'xsi' => 'http://www.w3.org/2001/XMLSchema-instance',
      'oai_etdms' => 'http://www.ndltd.org/standards/metadata/etdms/1.0/',
    );
    $this->metadata_namespace_prefix = 'oai_etdms';

    $this->root_element = 'thesis';
    $this->root_attributes = array(
      'xmlns:xsi' => $this->namespaces['xsi'],
      'xsi:schemaLocation' => $this->namespaces['oai_etdms'] . '  ' . $this->schema,
      'xmlns' => $this->namespaces['oai_etdms'],
    );

    $this->attributes = array(
      'alternativeTitle'  => array('lang', 'translated', 'scheme'),
      'contributor'       => array('lang', 'translated', 'scheme', 'role'),
      'coverage'          => array('lang', 'translated', 'scheme'),
      'creator'           => array('lang', 'translated', 'scheme'),
      'date'              => array('lang', 'translated', 'scheme'),
      'description'       => array('lang', 'translated', 'scheme', 'abstract', 'note', 'release'),
      'format'            => array('lang', 'translated', 'scheme'),
      'identifier'        => array('lang', 'translated', 'scheme'),
      'language'          => array('lang', 'translated', 'scheme'),
      'publisher'         => array('lang', 'translated', 'scheme', 'country'),
      'relation'          => array('lang', 'translated', 'scheme'),
      'rights'            => array('lang', 'translated', 'scheme'),
      'source'            => array('lang', 'translated', 'scheme'),
      'subject'           => array('lang', 'translated', 'scheme'),
      'title'             => array('lang', 'translated', 'scheme'),
      'type'              => array('lang', 'translated', 'scheme'),
      'degree/discipline' => array('lang', 'translated', 'scheme'),
      'degree/grantor'    => array('lang', 'translated', 'scheme'),
      'degree/level'      => array('lang', 'translated', 'scheme'),
      'degree/name'       => array('lang', 'translated', 'scheme'),
    );

    $this->elements = array(
      'none'                => t('- None -'),
      '@role'               => t('(Attribute) contributor.role'),
      '@abstract'           => t('(Attribute) description.abstract'),  // Not present in the XSD, but listed in the standard's documentation.
      '@note'               => t('(Attribute) description.note'),
      '@release'            => t('(Attribute) description.release'),
      '@country'            => t('(Attribute) publisher.country'),  // Not present in the XSD, but listed in the standard's documentation.
      '@lang'               => t('(Common attribute) lang'),
      '@scheme'             => t('(Common attribute) scheme'),
      '@translated'         => t('(Common attribute) translated'),
      'contributor'         => 'dc.contributor',
      'coverage'            => 'dc.coverage',
      'creator'             => 'dc.creator',
      'date'                => 'dc.date',
      'description'         => 'dc.description',
      'format'              => 'dc.format',
      'identifier'          => 'dc.identifier',
      'language'            => 'dc.language',
      'publisher'           => 'dc.publisher',
      'relation'            => 'dc.relation',
      'rights'              => 'dc.rights',
      'source'              => 'dc.source',
      'subject'             => 'dc.subject',
      'title'               => 'dc.title',
      'alternativeTitle'    => 'dc.title.alternative',
      'type'                => 'dc.type',
      'degree/discipline'   => 'thesis.degree.discipline',
      'degree/grantor'      => 'thesis.degree.grantor',
      'degree/level'        => 'thesis.degree.level',
      'degree/name'         => 'thesis.degree.name',
    );
  }
}
