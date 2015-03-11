/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSString;

@interface NNMKProtoAccountAdditionOrUpdate : PBCodable <NSCopying> {
    struct { 
        unsigned int shouldArchive : 1; 
    NSString *_accountId;
    NSString *_displayName;
    } _has;
    bool_shouldArchive;
}

@property(retain) NSString * accountId;
@property(retain) NSString * displayName;
@property(readonly) bool hasAccountId;
@property(readonly) bool hasDisplayName;
@property bool hasShouldArchive;
@property bool shouldArchive;

- (void).cxx_destruct;
- (id)accountId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasAccountId;
- (bool)hasDisplayName;
- (bool)hasShouldArchive;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasShouldArchive:(bool)arg1;
- (void)setShouldArchive:(bool)arg1;
- (bool)shouldArchive;
- (void)writeTo:(id)arg1;

@end