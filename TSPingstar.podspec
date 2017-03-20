Pod::Spec.new do |s|
s.name             = "TSPingstar"
s.version          = "1.0.6"
s.summary          = "PSSDK dev version"
s.homepage         = "https://github.com/xiangyu-czc/TSPingstar"
s.license          = 'MIT'
s.author           = { "xiangyu-czc" => "lizhiwei@newborn-town.com" }
s.source           = { :git => "https://github.com/xiangyu-czc/TSPingstar.git", :tag => s.version }
s.social_media_url = 'http://www.pingstart.com'

s.platform     = :ios, '8.0'
s.requires_arc = true

#s.frameworks   =  'CoreGraphics', 'UIKit', 'Foundation', 'QuartzCore', 'StoreKit', 'SystemConfiguration', 'CoreTelephony', 'Security', 'AdSupport'
#s.source_files = 'PingStart/*.{h,m}'
#s.ios.vendored_library = 'PingStart/libPingStart.a'
#s.xcconfig     = { 'OTHER_LDFLAGS' => '-ObjC'}
#s.libraries = 'z'

s.default_subspecs = 'Default'

s.subspec 'Default' do |ss|
ss.source_files = 'NbtPingStart.framework/Headers/*.h'
ss.preserve_paths  = 'NbtPingStart.framework'
ss.public_header_files  = 'NbtPingStart.framework/Headers/*.h'
ss.ios.vendored_frameworks  = 'NbtPingStart.framework'
end


s.subspec 'AdMobAdapter' do |am|
am.source_files = 'AdMobAdapter.framework/Headers/*.h'
am.preserve_paths  = 'AdMobAdapter.framework'
am.public_header_files  = 'AdMobAdapter.framework/Headers/*.h'
am.ios.vendored_frameworks  = 'AdMobAdapter.framework'
end


end

