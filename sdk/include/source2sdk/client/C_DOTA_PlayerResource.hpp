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
    // Size: 0x33b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
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
        [[maybe_unused]] std::uint8_t pad_0x538[0x10]; // 0x538
        bool m_bWasDataUpdateCreated; // 0x548        
        [[maybe_unused]] std::uint8_t pad_0x549[0x7]; // 0x549
        // metadata: MNetworkEnable
        // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
        char m_vecPlayerTeamData[0x50]; // 0x550        
        // metadata: MNetworkEnable
        // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::PlayerResourcePlayerData_t> m_vecPlayerData;
        char m_vecPlayerData[0x50]; // 0x5a0        
        // metadata: MNetworkEnable
        // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
        char m_vecBrodcasterData[0x50]; // 0x5f0        
        // metadata: MNetworkEnable
        // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint32_t> m_vecEventsForDisplay;
        char m_vecEventsForDisplay[0x18]; // 0x640        
        // metadata: MNetworkEnable
        int8_t m_nPrimaryEventIndex; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x659[0x3]; // 0x659
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnObsoletePrimaryEventChanged"
        // metadata: MNetworkAlias "m_nEventIDAssociatedWithEventData"
        uint32_t m_nObsoleteEventIDAssociatedWithEventData; // 0x65c        
        // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_playerIDToPlayer[64];
        char m_playerIDToPlayer[0x100]; // 0x660        
        CUtlSymbolLarge m_iszName[64]; // 0x760        
        CUtlSymbolLarge m_iszHTMLSafeName[64]; // 0x960        
        CUtlSymbolLarge m_iszFilteredHTMLSafeName[64]; // 0xb60        
        [[maybe_unused]] std::uint8_t pad_0xd60[0x1900]; // 0xd60
        bool m_bDirtySuggestedItems; // 0x2660        
        bool m_bDirtyEstimatedMatchDuration; // 0x2661        
        bool m_bDirtySelection; // 0x2662        
        bool m_bHasWorldTreesChanged; // 0x2663        
        bool m_bWorldTreeModelsChanged; // 0x2664        
        bool m_bSwapWillingness[24]; // 0x2665        
        [[maybe_unused]] std::uint8_t pad_0x267d[0x43]; // 0x267d
        // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_DOTA_Unit_Courier>> m_hTeamCouriers[15];
        char m_hTeamCouriers[0x168]; // 0x26c0        
        // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_DOTA_Unit_Courier>> m_hPlayerCouriers[64];
        char m_hPlayerCouriers[0x600]; // 0x2828        
        // m_vecOnstageHomeTeams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_vecOnstageHomeTeams;
        char m_vecOnstageHomeTeams[0x18]; // 0x2e28        
        client::PlayerSeatAssignment_t* m_pPlayerIDToOnstageSlot[24]; // 0x2e40        
        // m_vecOnstagePlayerSeats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PlayerSeatAssignment_t> m_vecOnstagePlayerSeats;
        char m_vecOnstagePlayerSeats[0x18]; // 0x2f00        
        int32_t m_nEventNPCReplaced; // 0x2f18        
        int32_t m_nEventPlayerInfo; // 0x2f1c        
        int32_t m_nInventoryUpdated; // 0x2f20        
        [[maybe_unused]] std::uint8_t pad_0x2f24[0x494];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_PlayerResource because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_PlayerResource) == 0x33b8);
};
