#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CIngameEvent_Base.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bMiniGameActive"
        // static metadata: MNetworkVarNames "int8 m_vecTargetAssignments"
        // static metadata: MNetworkVarNames "uint8 m_vecMiniGamePoints"
        // static metadata: MNetworkVarNames "uint8 m_vecMiniGameKills"
        #pragma pack(push, 1)
        class CIngameEvent_MuertaReleaseSpring2023 : public source2sdk::server::CIngameEvent_Base
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMuertaReleaseEventMiniGameActiveChanged"
            bool m_bMiniGameActive; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMuertaReleaseEventTargetAssignmentsChanged"
            std::int8_t m_vecTargetAssignments[10]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMuertaReleaseEventMiniGamePointsChanged"
            std::uint8_t m_vecMiniGamePoints[10]; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_vecMiniGameKills[10]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_activeGravestones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_activeGravestones;
            char m_activeGravestones[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CIngameEvent_MuertaReleaseSpring2023 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CIngameEvent_MuertaReleaseSpring2023) == 0x_);
    };
};
