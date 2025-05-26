#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t.hpp"
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimatingActivity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x1ae8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nEncounterType"
        // static metadata: MNetworkVarNames "bool m_bIsEliteEncounter"
        // static metadata: MNetworkVarNames "bool m_bIsAscensionLevelPicker"
        // static metadata: MNetworkVarNames "string_t m_strEncounterName"
        // static metadata: MNetworkVarNames "string_t m_strAscensionAbilities"
        // static metadata: MNetworkVarNames "EHANDLE m_hEffigy"
        // static metadata: MNetworkVarNames "CHandle<CBaseAnimating> m_hRoomGate"
        // static metadata: MNetworkVarNames "bool m_bIsBeingChanneled"
        // static metadata: MNetworkVarNames "float m_flGoalCaptureProgress"
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_AghsFort_Watch_Tower : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            std::int32_t m_nOptionNumber; // 0x1a70            
            float m_flMovePlayersRadius; // 0x1a74            
            source2sdk::client::CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t m_nExitDirection; // 0x1a78            
            Vector m_vExitLocation; // 0x1a7c            
            std::int32_t m_nPathSelectedID; // 0x1a88            
            // metadata: MNetworkEnable
            std::int32_t m_nEncounterType; // 0x1a8c            
            // metadata: MNetworkEnable
            bool m_bIsEliteEncounter; // 0x1a90            
            // metadata: MNetworkEnable
            bool m_bIsAscensionLevelPicker; // 0x1a91            
            uint8_t _pad1a92[0x6]; // 0x1a92
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_strEncounterName; // 0x1a98            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_strAscensionAbilities; // 0x1aa0            
            // metadata: MNetworkEnable
            // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEffigy;
            char m_hEffigy[0x4]; // 0x1aa8            
            float m_flYaw; // 0x1aac            
            float m_flStartTime; // 0x1ab0            
            source2sdk::entity2::GameTime_t m_flCursorEnterTime; // 0x1ab4            
            bool m_bShowingTooltip; // 0x1ab8            
            uint8_t _pad1ab9[0x1b]; // 0x1ab9
            float m_flLastUpdateTime; // 0x1ad4            
            source2sdk::client::ParticleIndex_t m_nChannellingParticle; // 0x1ad8            
            // metadata: MNetworkEnable
            // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimatingActivity> m_hRoomGate;
            char m_hRoomGate[0x4]; // 0x1adc            
            // metadata: MNetworkEnable
            bool m_bIsBeingChanneled; // 0x1ae0            
            uint8_t _pad1ae1[0x3]; // 0x1ae1
            // metadata: MNetworkEnable
            float m_flGoalCaptureProgress; // 0x1ae4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x1ae8);
    };
};
