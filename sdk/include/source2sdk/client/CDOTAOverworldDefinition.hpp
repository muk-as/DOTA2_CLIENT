#pragma once
#include "source2sdk/client/CDOTAEventActionGrantAndClaimPairTrigger.hpp"
#include "source2sdk/client/CDOTAEventActionTrigger.hpp"
#include "source2sdk/client/CDOTAOverworldPathColorRule.hpp"
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/OverworldID_t.hpp"
#include "source2sdk/client/OverworldNodeID_t.hpp"
#include "source2sdk/client/OverworldTokenID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CDOTAOverworldCharacter;
};

namespace source2sdk::client
{
    class CDOTAOverworldClickable;
};

namespace source2sdk::client
{
    class CDOTAOverworldEncounter;
};

namespace source2sdk::client
{
    class CDOTAOverworldHero;
};

namespace source2sdk::client
{
    class CDOTAOverworldHeroReward;
};

namespace source2sdk::client
{
    class CDOTAOverworldNode;
};

namespace source2sdk::client
{
    class CDOTAOverworldPath;
};

namespace source2sdk::client
{
    class CDOTAOverworldToken;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x358
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    // static metadata: MVDataSingleton
    #pragma pack(push, 1)
    class CDOTAOverworldDefinition
    {
    public:
        CUtlString generic_data_type; // 0x0        
        // metadata: MPropertyDescription
        client::OverworldID_t m_unID; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x7]; // 0x9
        // metadata: MPropertyDescription
        CUtlString m_sKey; // 0x10        
        // metadata: MPropertyDescription "The event related to this overworld. Used for rewards and expiration."
        client::EEvent m_eAssociatedEvent; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        // metadata: MPropertyDescription "An event action to grant whenever a node is unlocked."
        CUtlString m_sNodeUnlockEventAction; // 0x20        
        Vector2D m_vGridOffset; // 0x28        
        uint32_t m_unGridSize; // 0x30        
        uint32_t m_unMapWidth; // 0x34        
        uint32_t m_unMapHeight; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4]; // 0x3c
        CUtlString m_sMapVisualsXmlPath; // 0x40        
        // metadata: MPropertyDescription
        client::OverworldNodeID_t m_unStartNodeID; // 0x48        
        // metadata: MPropertyDescription
        client::OverworldNodeID_t m_unEndNodeID; // 0x4a        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4]; // 0x4c
        // metadata: MPropertyDescription "Name/key of the Visual Novel associated with this map."
        CUtlString m_sVisualNovelName; // 0x50        
        // metadata: MPropertyDescription "Prefix to combine with tokent names to give their loc strings."
        CUtlString m_sTokenLocStringPrefix; // 0x58        
        // metadata: MPropertyDescription "Act number loc string, e.g. Act I."
        CUtlString m_sActNumberLocString; // 0x60        
        // metadata: MPropertyDescription "Act title loc string, e.g. The Eyrie."
        CUtlString m_sActTitleLocString; // 0x68        
        // metadata: MPropertyDescription
        client::item_definition_index_t m_unPremiumItemDef; // 0x70        
        // metadata: MPropertyDescription
        client::item_definition_index_t m_unFullCompletionItemDef; // 0x74        
        // metadata: MPropertyDescription "ID of the scrap token rewarded for playing matches."
        client::OverworldTokenID_t m_unScrapTokenID; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x79[0x7]; // 0x79
        // m_vecEventActionTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAEventActionTrigger> m_vecEventActionTriggers;
        char m_vecEventActionTriggers[0x18]; // 0x80        
        // m_vecEventActionGrantAndClaimPairTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAEventActionGrantAndClaimPairTrigger> m_vecEventActionGrantAndClaimPairTriggers;
        char m_vecEventActionGrantAndClaimPairTriggers[0x18]; // 0x98        
        // m_vecPathColorRules has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldPathColorRule> m_vecPathColorRules;
        char m_vecPathColorRules[0x18]; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x140]; // 0xc8
        // m_vecTokenTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldToken*> m_vecTokenTypes;
        char m_vecTokenTypes[0x18]; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x220[0x18]; // 0x220
        // m_vecHeroRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldHeroReward*> m_vecHeroRewards;
        char m_vecHeroRewards[0x18]; // 0x238        
        // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldNode*> m_vecNodes;
        char m_vecNodes[0x18]; // 0x250        
        // m_vecPaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldPath*> m_vecPaths;
        char m_vecPaths[0x18]; // 0x268        
        // m_vecEncounters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldEncounter*> m_vecEncounters;
        char m_vecEncounters[0x18]; // 0x280        
        // m_vecHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldHero*> m_vecHeroes;
        char m_vecHeroes[0x18]; // 0x298        
        // m_vecCharacters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldCharacter*> m_vecCharacters;
        char m_vecCharacters[0x18]; // 0x2b0        
        // m_vecClickables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldClickable*> m_vecClickables;
        char m_vecClickables[0x18]; // 0x2c8        
        [[maybe_unused]] std::uint8_t pad_0x2e0[0x78];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldDefinition, generic_data_type) == 0x0);
    static_assert(offsetof(CDOTAOverworldDefinition, m_unID) == 0x8);
    static_assert(offsetof(CDOTAOverworldDefinition, m_sKey) == 0x10);
    static_assert(offsetof(CDOTAOverworldDefinition, m_eAssociatedEvent) == 0x18);
    static_assert(offsetof(CDOTAOverworldDefinition, m_sNodeUnlockEventAction) == 0x20);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vGridOffset) == 0x28);
    static_assert(offsetof(CDOTAOverworldDefinition, m_unGridSize) == 0x30);
    static_assert(offsetof(CDOTAOverworldDefinition, m_unMapWidth) == 0x34);
    static_assert(offsetof(CDOTAOverworldDefinition, m_unMapHeight) == 0x38);
    static_assert(offsetof(CDOTAOverworldDefinition, m_sMapVisualsXmlPath) == 0x40);
    static_assert(offsetof(CDOTAOverworldDefinition, m_unStartNodeID) == 0x48);
    static_assert(offsetof(CDOTAOverworldDefinition, m_unEndNodeID) == 0x4a);
    static_assert(offsetof(CDOTAOverworldDefinition, m_sVisualNovelName) == 0x50);
    static_assert(offsetof(CDOTAOverworldDefinition, m_sTokenLocStringPrefix) == 0x58);
    static_assert(offsetof(CDOTAOverworldDefinition, m_sActNumberLocString) == 0x60);
    static_assert(offsetof(CDOTAOverworldDefinition, m_sActTitleLocString) == 0x68);
    static_assert(offsetof(CDOTAOverworldDefinition, m_unPremiumItemDef) == 0x70);
    static_assert(offsetof(CDOTAOverworldDefinition, m_unFullCompletionItemDef) == 0x74);
    static_assert(offsetof(CDOTAOverworldDefinition, m_unScrapTokenID) == 0x78);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecEventActionTriggers) == 0x80);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecEventActionGrantAndClaimPairTriggers) == 0x98);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecPathColorRules) == 0xb0);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecTokenTypes) == 0x208);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecHeroRewards) == 0x238);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecNodes) == 0x250);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecPaths) == 0x268);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecEncounters) == 0x280);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecHeroes) == 0x298);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecCharacters) == 0x2b0);
    static_assert(offsetof(CDOTAOverworldDefinition, m_vecClickables) == 0x2c8);
    
    static_assert(sizeof(CDOTAOverworldDefinition) == 0x358);
};
