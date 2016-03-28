Pod::Spec.new do |s|
  s.name             = "HRMethodsAttributes"
  s.version          = "1.0.0"
  s.summary          = "Simple attribute defines for 'deprecated' and 'unavailable'."

  s.description      = "Simple attribute defines for 'deprecated' and 'unavailable'. Just write DEPRECATED(or another define)(instead of ugly __attribute__((blah-blah-blah)) after method's declaration to make it deprecated."

  s.homepage         = "https://github.com/ivanshevelev/HRMethodsAttributes"
  s.license          = 'MIT'
  s.author           = { "Ivan Shevelev" => "ivan.shevelev@sibers.com" }
  s.source           = { :git => "https://github.com/ivanshevelev/HRMethodsAttributes.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/antsy_ivan'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*'
  s.resource_bundles = {
    'HRMethodsAttributes' => ['Pod/Assets/*.png']
  }
  s.public_header_files = 'Pod/Classes/**/*.h'

end
