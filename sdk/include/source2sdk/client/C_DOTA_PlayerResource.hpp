#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/PlayerResourceBroadcasterData_t.hpp"
#include "source2sdk/client/PlayerResourcePlayerData_t.hpp"
#include "source2sdk/client/PlayerResourcePlayerTeamData_t.hpp"
#include "source2sdk/client/PlayerSeatAssignment_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_DOTA_Unit_Courier;
};

namespace source2sdk::client
{
    struct PlayerSeatAssignment_t;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x3420
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "PlayerResourcePlayerTeamData_t m_vecPlayerTeamData"
    // static metadata: MNetworkVarNames "PlayerResourcePlayerData_t m_vecPlayerData"
    // static metadata: MNetworkVarNames "PlayerResourceBroadcasterData_t m_vecBrodcasterData"
    // static metadata: MNetworkVarNames "uint32 m_vecEventsForDisplay"
    // static metadata: MNetworkVarNames "int8 m_nPrimaryEventIndex"
    // static metadata: MNetworkVarNames "uint32 m_nObsoleteEventIDAssociatedWithEventData"
    #pragma pack(push, 1)
    class C_DOTA_PlayerResource : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0x10]; // 0x560
        bool m_bWasDataUpdateCreated; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x571[0x7]; // 0x571
        // metadata: MNetworkEnable
        // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
        char m_vecPlayerTeamData[0x68]; // 0x578        
        // metadata: MNetworkEnable
        // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::PlayerResourcePlayerData_t> m_vecPlayerData;
        char m_vecPlayerData[0x68]; // 0x5e0        
        // metadata: MNetworkEnable
        // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
        char m_vecBrodcasterData[0x68]; // 0x648        
        // metadata: MNetworkEnable
        // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint32_t> m_vecEventsForDisplay;
        char m_vecEventsForDisplay[0x18]; // 0x6b0        
        // metadata: MNetworkEnable
        int8_t m_nPrimaryEventIndex; // 0x6c8        
        [[maybe_unused]] std::uint8_t pad_0x6c9[0x3]; // 0x6c9
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnObsoletePrimaryEventChanged"
        // metadata: MNetworkAlias "m_nEventIDAssociatedWithEventData"
        uint32_t m_nObsoleteEventIDAssociatedWithEventData; // 0x6cc        
        // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_playerIDToPlayer[64];
        char m_playerIDToPlayer[0x100]; // 0x6d0        
        CUtlSymbolLarge m_iszName[64]; // 0x7d0        
        CUtlSymbolLarge m_iszHTMLSafeName[64]; // 0x9d0        
        CUtlSymbolLarge m_iszFilteredHTMLSafeName[64]; // 0xbd0        
        [[maybe_unused]] std::uint8_t pad_0xdd0[0x1900]; // 0xdd0
        bool m_bDirtySuggestedItems; // 0x26d0        
        bool m_bDirtySelection; // 0x26d1        
        bool m_bHasWorldTreesChanged; // 0x26d2        
        bool m_bWorldTreeModelsChanged; // 0x26d3        
        bool m_bSwapWillingness[24]; // 0x26d4        
        [[maybe_unused]] std::uint8_t pad_0x26ec[0x3c]; // 0x26ec
        // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_DOTA_Unit_Courier>> m_hTeamCouriers[15];
        char m_hTeamCouriers[0x168]; // 0x2728        
        // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_DOTA_Unit_Courier>> m_hPlayerCouriers[64];
        char m_hPlayerCouriers[0x600]; // 0x2890        
        // m_vecOnstageHomeTeams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_vecOnstageHomeTeams;
        char m_vecOnstageHomeTeams[0x18]; // 0x2e90        
        client::PlayerSeatAssignment_t* m_pPlayerIDToOnstageSlot[24]; // 0x2ea8        
        // m_vecOnstagePlayerSeats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PlayerSeatAssignment_t> m_vecOnstagePlayerSeats;
        char m_vecOnstagePlayerSeats[0x18]; // 0x2f68        
        int32_t m_nEventNPCReplaced; // 0x2f80        
        int32_t m_nEventPlayerInfo; // 0x2f84        
        int32_t m_nInventoryUpdated; // 0x2f88        
        [[maybe_unused]] std::uint8_t pad_0x2f8c[0x494];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_PlayerResource because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_PlayerResource) == 0x3420);
};
