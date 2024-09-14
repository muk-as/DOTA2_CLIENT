#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CIngameEvent_Base.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a78
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bMiniGameActive"
    // static metadata: MNetworkVarNames "int8 m_vecTargetAssignments"
    // static metadata: MNetworkVarNames "uint8 m_vecMiniGamePoints"
    // static metadata: MNetworkVarNames "uint8 m_vecMiniGameKills"
    #pragma pack(push, 1)
    class CIngameEvent_MuertaReleaseSpring2023 : public server::CIngameEvent_Base
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMuertaReleaseEventMiniGameActiveChanged"
        bool m_bMiniGameActive; // 0x1a30        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMuertaReleaseEventTargetAssignmentsChanged"
        int8_t m_vecTargetAssignments[10]; // 0x1a31        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMuertaReleaseEventMiniGamePointsChanged"
        uint8_t m_vecMiniGamePoints[10]; // 0x1a3b        
        // metadata: MNetworkEnable
        uint8_t m_vecMiniGameKills[10]; // 0x1a45        
        [[maybe_unused]] std::uint8_t pad_0x1a4f[0x11]; // 0x1a4f
        // m_activeGravestones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_activeGravestones;
        char m_activeGravestones[0x18]; // 0x1a60        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CIngameEvent_MuertaReleaseSpring2023 because it is not a standard-layout class
    static_assert(sizeof(CIngameEvent_MuertaReleaseSpring2023) == 0x1a78);
};
