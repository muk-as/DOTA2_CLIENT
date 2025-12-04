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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            bool m_bWasDataUpdateCreated; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
            char m_vecPlayerTeamData[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourcePlayerData_t> m_vecPlayerData;
            char m_vecPlayerData[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
            char m_vecBrodcasterData[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint32_t> m_vecEventsForDisplay;
            char m_vecEventsForDisplay[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int8_t m_nPrimaryEventIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnObsoletePrimaryEventChanged"
            // metadata: MNetworkAlias "m_nEventIDAssociatedWithEventData"
            std::uint32_t m_nObsoleteEventIDAssociatedWithEventData; // 0x_            
            // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_playerIDToPlayer[64];
            char m_playerIDToPlayer[0x_]; // 0x_            
            // m_playerIDToPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_playerIDToPawn[64];
            char m_playerIDToPawn[0x_]; // 0x_            
            CUtlSymbolLarge m_iszName[64]; // 0x_            
            CUtlSymbolLarge m_iszHTMLSafeName[64]; // 0x_            
            CUtlSymbolLarge m_iszFilteredHTMLSafeName[64]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bDirtySelection; // 0x_            
            bool m_bHasWorldTreesChanged; // 0x_            
            bool m_bWorldTreeModelsChanged; // 0x_            
            bool m_bSwapWillingness[24]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_DOTA_Unit_Courier>> m_hTeamCouriers[15];
            char m_hTeamCouriers[0x_]; // 0x_            
            // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_DOTA_Unit_Courier>> m_hPlayerCouriers[64];
            char m_hPlayerCouriers[0x_]; // 0x_            
            // m_vecOnstageHomeTeams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecOnstageHomeTeams;
            char m_vecOnstageHomeTeams[0x_]; // 0x_            
            source2sdk::client::PlayerSeatAssignment_t* m_pPlayerIDToOnstageSlot[24]; // 0x_            
            // m_vecOnstagePlayerSeats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerSeatAssignment_t> m_vecOnstagePlayerSeats;
            char m_vecOnstagePlayerSeats[0x_]; // 0x_            
            std::int32_t m_nEventNPCReplaced; // 0x_            
            std::int32_t m_nEventPlayerInfo; // 0x_            
            std::int32_t m_nInventoryUpdated; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_PlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_PlayerResource) == 0x_);
    };
};
