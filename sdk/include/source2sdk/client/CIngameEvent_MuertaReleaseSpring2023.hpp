#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_IngameEvent_Base.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x19f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bMiniGameActive"
        // static metadata: MNetworkVarNames "int8 m_vecTargetAssignments"
        // static metadata: MNetworkVarNames "uint8 m_vecMiniGamePoints"
        // static metadata: MNetworkVarNames "uint8 m_vecMiniGameKills"
        #pragma pack(push, 1)
        class CIngameEvent_MuertaReleaseSpring2023 : public source2sdk::client::C_IngameEvent_Base
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMuertaReleaseEventMiniGameActiveChanged"
            bool m_bMiniGameActive; // 0x19b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMuertaReleaseEventTargetAssignmentsChanged"
            std::int8_t m_vecTargetAssignments[10]; // 0x19b1            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMuertaReleaseEventMiniGamePointsChanged"
            std::uint8_t m_vecMiniGamePoints[10]; // 0x19bb            
            // metadata: MNetworkEnable
            std::uint8_t m_vecMiniGameKills[10]; // 0x19c5            
            uint8_t _pad19cf[0x11]; // 0x19cf
            // m_activeGravestones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_activeGravestones;
            char m_activeGravestones[0x18]; // 0x19e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CIngameEvent_MuertaReleaseSpring2023 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CIngameEvent_MuertaReleaseSpring2023) == 0x19f8);
    };
};
