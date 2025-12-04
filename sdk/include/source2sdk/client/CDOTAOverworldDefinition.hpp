#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAEventActionGrantAndClaimPairTrigger.hpp"
#include "source2sdk/client/CDOTAEventActionTrigger.hpp"
#include "source2sdk/client/CDOTAOverworldPathColorRule.hpp"
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/EOverworldProgressionType.hpp"
#include "source2sdk/client/OverworldID_t.hpp"
#include "source2sdk/client/OverworldNodeID_t.hpp"
#include "source2sdk/client/OverworldTokenID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldCharacter;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldClickable;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldEncounter;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldHero;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldHeroReward;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldNode;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldPath;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldRoom;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDOTAOverworldToken;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        #pragma pack(push, 1)
        class CDOTAOverworldDefinition
        {
        public:
            CUtlString generic_data_type; // 0x_            
            // metadata: MPropertyDescription
            source2sdk::client::OverworldID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription
            CUtlString m_sKey; // 0x_            
            // metadata: MPropertyDescription "The event related to this overworld. Used for rewards and expiration."
            source2sdk::client::EEvent m_eAssociatedEvent; // 0x_            
            source2sdk::client::EOverworldProgressionType m_eProgressionType; // 0x_            
            // metadata: MPropertyDescription "An event action to grant whenever a node is unlocked."
            CUtlString m_sNodeUnlockEventAction; // 0x_            
            Vector2D m_vGridOffset; // 0x_            
            std::uint32_t m_unGridSize; // 0x_            
            std::uint32_t m_unMapWidth; // 0x_            
            std::uint32_t m_unMapHeight; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sMapVisualsXmlPath; // 0x_            
            // metadata: MPropertyDescription
            // m_vecStartNodeIds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::OverworldNodeID_t> m_vecStartNodeIds;
            char m_vecStartNodeIds[0x_]; // 0x_            
            // metadata: MPropertyDescription
            source2sdk::client::OverworldNodeID_t m_unEndNodeID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Name/key of the Visual Novel associated with this map."
            CUtlString m_sVisualNovelName; // 0x_            
            // metadata: MPropertyDescription "Prefix to combine with tokent names to give their loc strings."
            CUtlString m_sTokenLocStringPrefix; // 0x_            
            // metadata: MPropertyDescription "Act number loc string, e.g. Act I."
            CUtlString m_sActNumberLocString; // 0x_            
            // metadata: MPropertyDescription "Act title loc string, e.g. The Eyrie."
            CUtlString m_sActTitleLocString; // 0x_            
            // metadata: MPropertyDescription
            source2sdk::client::item_definition_index_t m_unPremiumItemDef; // 0x_            
            // metadata: MPropertyDescription
            source2sdk::client::item_definition_index_t m_unFullCompletionItemDef; // 0x_            
            // metadata: MPropertyDescription "ID of the scrap token rewarded for playing matches."
            source2sdk::client::OverworldTokenID_t m_unScrapTokenID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecEventActionTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAEventActionTrigger> m_vecEventActionTriggers;
            char m_vecEventActionTriggers[0x_]; // 0x_            
            // m_vecEventActionGrantAndClaimPairTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAEventActionGrantAndClaimPairTrigger> m_vecEventActionGrantAndClaimPairTriggers;
            char m_vecEventActionGrantAndClaimPairTriggers[0x_]; // 0x_            
            // m_vecPathColorRules has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldPathColorRule> m_vecPathColorRules;
            char m_vecPathColorRules[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecTokenTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldToken*> m_vecTokenTypes;
            char m_vecTokenTypes[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecHeroRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldHeroReward*> m_vecHeroRewards;
            char m_vecHeroRewards[0x_]; // 0x_            
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldNode*> m_vecNodes;
            char m_vecNodes[0x_]; // 0x_            
            // m_vecPaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldPath*> m_vecPaths;
            char m_vecPaths[0x_]; // 0x_            
            // m_vecRooms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldRoom*> m_vecRooms;
            char m_vecRooms[0x_]; // 0x_            
            // m_vecEncounters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldEncounter*> m_vecEncounters;
            char m_vecEncounters[0x_]; // 0x_            
            // m_vecHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldHero*> m_vecHeroes;
            char m_vecHeroes[0x_]; // 0x_            
            // m_vecCharacters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldCharacter*> m_vecCharacters;
            char m_vecCharacters[0x_]; // 0x_            
            // m_vecClickables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldClickable*> m_vecClickables;
            char m_vecClickables[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, generic_data_type) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sKey) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_eAssociatedEvent) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_eProgressionType) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sNodeUnlockEventAction) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vGridOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unGridSize) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unMapWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unMapHeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sMapVisualsXmlPath) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecStartNodeIds) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unEndNodeID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sVisualNovelName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sTokenLocStringPrefix) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sActNumberLocString) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_sActTitleLocString) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unPremiumItemDef) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unFullCompletionItemDef) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_unScrapTokenID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecEventActionTriggers) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecEventActionGrantAndClaimPairTriggers) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecPathColorRules) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecTokenTypes) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecHeroRewards) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecNodes) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecPaths) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecRooms) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecEncounters) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecHeroes) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecCharacters) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldDefinition, m_vecClickables) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldDefinition) == 0x_);
    };
};
