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
        // Size: 0x18c0
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
            std::int32_t m_nOptionNumber; // 0x1848            
            float m_flMovePlayersRadius; // 0x184c            
            source2sdk::client::CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t m_nExitDirection; // 0x1850            
            Vector m_vExitLocation; // 0x1854            
            std::int32_t m_nPathSelectedID; // 0x1860            
            // metadata: MNetworkEnable
            std::int32_t m_nEncounterType; // 0x1864            
            // metadata: MNetworkEnable
            bool m_bIsEliteEncounter; // 0x1868            
            // metadata: MNetworkEnable
            bool m_bIsAscensionLevelPicker; // 0x1869            
            uint8_t _pad186a[0x6]; // 0x186a
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_strEncounterName; // 0x1870            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_strAscensionAbilities; // 0x1878            
            // metadata: MNetworkEnable
            // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEffigy;
            char m_hEffigy[0x4]; // 0x1880            
            float m_flYaw; // 0x1884            
            float m_flStartTime; // 0x1888            
            source2sdk::entity2::GameTime_t m_flCursorEnterTime; // 0x188c            
            bool m_bShowingTooltip; // 0x1890            
            uint8_t _pad1891[0x1b]; // 0x1891
            float m_flLastUpdateTime; // 0x18ac            
            source2sdk::client::ParticleIndex_t m_nChannellingParticle; // 0x18b0            
            // metadata: MNetworkEnable
            // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimatingActivity> m_hRoomGate;
            char m_hRoomGate[0x4]; // 0x18b4            
            // metadata: MNetworkEnable
            bool m_bIsBeingChanneled; // 0x18b8            
            uint8_t _pad18b9[0x3]; // 0x18b9
            // metadata: MNetworkEnable
            float m_flGoalCaptureProgress; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x18c0);
    };
};
