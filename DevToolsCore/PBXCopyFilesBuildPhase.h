//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  3 2015 17:00:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PBXBuildPhase.h"

@protocol PBXCopyFilesBuildPhase <PBXBuildPhase>

+ (id)archivableAttributes;
+ (id)defaultName;
+ (id)identifier;
- (Class)dependencyGraphSnapshotClass;
- (BOOL)acceptsVariantGroups;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (void)buildFileWasAdded:(id)arg1;
- (BOOL)shouldRemoveHeadersWhenCopying:(id)arg1;
- (BOOL)shouldCodeSignBuildFileAfterCopying:(id)arg1;
- (BOOL)copiesFilesIntoProduct;
- (id)allowedFileTypes;
- (void)setSubpath:(id)arg1 relativeToSubfolder:(int)arg2;
- (void)setAbsolutePath:(id)arg1;
- (id)destinationPath;
- (int)destinationSubfolder;
- (BOOL)canRename;
- (id)initWithName:(id)arg1;
- (id)initFromTemplateDictionary:(id)arg1;

@end

