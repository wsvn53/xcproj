#import "PBXReference.h"

@protocol PBXFileReference <PBXReference, NSObject>

- (id<PBXFileReference>)initWithName:(id)arg1 path:(id)arg2 sourceTree:(id)arg3;
- (BOOL)deleteFromProject;

@end
