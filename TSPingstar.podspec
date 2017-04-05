Pod::Spec.new do |s|
s.name             = "TSPingstar"
s.version          = "1.0.17"
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


#s.subspec 'AdMobAdapter' do |am|
#am.source_files = 'AdMobAdapter.framework/Headers/*.h'
#am.preserve_paths  = 'AdMobAdapter.framework'
#am.public_header_files  = 'AdMobAdapter.framework/Headers/*.h'
#am.ios.vendored_frameworks  = 'AdMobAdapter.framework'
#am.dependency 'Firebase/Core'
#am.dependency 'Firebase/AdMob'
#end


#s.subspec 'FacebookAdapter' do |fb|
#fb.source_files = 'FacebookAdapter.framework/Headers/*.h'
#fb.preserve_paths  = 'FacebookAdapter.framework'
#fb.public_header_files  = 'FacebookAdapter.framework/Headers/*.h'
#fb.ios.vendored_frameworks  = 'FacebookAdapter.framework'
#fb.dependency 'FBAudienceNetwork'
#fb.dependency 'FBSDKCoreKit'
#end


#s.subspec 'AdcolonyAdapter' do |cy|
#cy.source_files = 'AdcolonyAdapter.framework/Headers/*.h'
#cy.preserve_paths  = 'AdcolonyAdapter.framework'
#cy.public_header_files  = 'AdcolonyAdapter.framework/Headers/*.h'
#cy.ios.vendored_frameworks  = 'AdcolonyAdapter.framework'
#cy.dependency 'AdColony'
#end


#s.subspec 'MopubAdapter' do |mp|
#mp.source_files = 'MopubAdapter.framework/Headers/*.h'
#mp.preserve_paths  = 'MopubAdapter.framework'
#mp.public_header_files  = 'MopubAdapter.framework/Headers/*.h'
#mp.ios.vendored_frameworks  = 'MopubAdapter.framework'
#end


s.subspec 'VungleAdapter' do |vg|
vg.source_files = 'VungleAdapter.framework/Headers/*.h'
vg.preserve_paths  = 'VungleAdapter.framework'
vg.public_header_files  = 'VungleAdapter.framework/Headers/*.h'
vg.ios.vendored_frameworks  = 'VungleAdapter.framework'
vg.dependency 'VungleSDK-iOS'
end




end

