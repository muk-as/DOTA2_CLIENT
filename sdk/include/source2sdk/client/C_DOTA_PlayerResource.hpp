#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/PlayerResourceBroadcasterData_t.hpp"
#include "source2sdk/client/PlayerResourcePlayerData_t.hpp"
#include "source2sdk/client/PlayerResourcePlayerTeamData_t.hpp"
#include "source2sdk/client/PlayerSeatAssignment_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_Unit_Courier;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct PlayerSeatAssignment_t;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x33d0
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
        class C_DOTA_PlayerResource : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0510[0x10]; // 0x510
            bool m_bWasDataUpdateCreated; // 0x520            
            uint8_t _pad0521[0x7]; // 0x521
            // metadata: MNetworkEnable
            // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
            char m_vecPlayerTeamData[0x68]; // 0x528            
            // metadata: MNetworkEnable
            // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourcePlayerData_t> m_vecPlayerData;
            char m_vecPlayerData[0x68]; // 0x590            
            // metadata: MNetworkEnable
            // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
            char m_vecBrodcasterData[0x68]; // 0x5f8            
            // metadata: MNetworkEnable
            // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint32_t> m_vecEventsForDisplay;
            char m_vecEventsForDisplay[0x18]; // 0x660            
            // metadata: MNetworkEnable
            std::int8_t m_nPrimaryEventIndex; // 0x678            
            uint8_t _pad0679[0x3]; // 0x679
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnObsoletePrimaryEventChanged"
            // metadata: MNetworkAlias "m_nEventIDAssociatedWithEventData"
            std::uint32_t m_nObsoleteEventIDAssociatedWithEventData; // 0x67c            
            // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_playerIDToPlayer[64];
            char m_playerIDToPlayer[0x100]; // 0x680            
            CUtlSymbolLarge m_iszName[64]; // 0x780            
            CUtlSymbolLarge m_iszHTMLSafeName[64]; // 0x980            
            CUtlSymbolLarge m_iszFilteredHTMLSafeName[64]; // 0xb80            
            uint8_t _pad0d80[0x1900]; // 0xd80
            bool m_bDirtySuggestedItems; // 0x2680            
            bool m_bDirtySelection; // 0x2681            
            bool m_bHasWorldTreesChanged; // 0x2682            
            bool m_bWorldTreeModelsChanged; // 0x2683            
            bool m_bSwapWillingness[24]; // 0x2684            
            uint8_t _pad269c[0x3c]; // 0x269c
            // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_DOTA_Unit_Courier>> m_hTeamCouriers[15];
            char m_hTeamCouriers[0x168]; // 0x26d8            
            // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_DOTA_Unit_Courier>> m_hPlayerCouriers[64];
            char m_hPlayerCouriers[0x600]; // 0x2840            
            // m_vecOnstageHomeTeams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecOnstageHomeTeams;
            char m_vecOnstageHomeTeams[0x18]; // 0x2e40            
            source2sdk::client::PlayerSeatAssignment_t* m_pPlayerIDToOnstageSlot[24]; // 0x2e58            
            // m_vecOnstagePlayerSeats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerSeatAssignment_t> m_vecOnstagePlayerSeats;
            char m_vecOnstagePlayerSeats[0x18]; // 0x2f18            
            std::int32_t m_nEventNPCReplaced; // 0x2f30            
            std::int32_t m_nEventPlayerInfo; // 0x2f34            
            std::int32_t m_nInventoryUpdated; // 0x2f38            
            uint8_t _pad2f3c[0x494];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_PlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_PlayerResource) == 0x33d0);
    };
};
