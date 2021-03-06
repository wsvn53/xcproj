#import "PBXBuildPhase.h"
#import "XCConfigurationList.h"
#import "IDEBuildParameters.h"
#import "PBXFrameworksBuildPhase.h"

@protocol PBXTarget <NSObject>

- (NSString *) name;

- (id<XCConfigurationList>) buildConfigurationList;

- (NSString *) expandedValueForString:(NSString *)string forBuildParameters:(id<IDEBuildParameters>)buildParameters;

- (void) setBuildSetting:(NSString *)buildSetting forKeyPath:(NSString *)keyPath;

- (id<PBXBuildPhase>) buildPhaseOfClass:(Class)buildPhaseClass;
- (void) addBuildPhase:(id<PBXBuildPhase>)buildPhase;
- (id<PBXFrameworksBuildPhase>) defaultFrameworksBuildPhase;
- (id<PBXBuildPhase>) defaultLinkBuildPhase;
- (id<PBXBuildPhase>) defaultSourceCodeBuildPhase;
- (id<PBXBuildPhase>) defaultResourceBuildPhase;
- (id<PBXBuildPhase>) defaultHeaderBuildPhase;

- (void)addDependency:(id)arg1;
- (NSMutableArray *)buildPhases;
- (NSArray *)copyFilesBuildPhases;
- (NSArray *)shellScriptBuildPhases;
- (NSArray *)appleScriptBuildPhases;
- (NSArray *)buildPhasesOfClass:(Class)arg1;
- (void)removeBuildPhase:(id<PBXBuildPhase>)buildPhase;
- (void)insertBuildPhase:(id<PBXBuildPhase>)buildPhase atIndex:(unsigned long long)index;

@end
