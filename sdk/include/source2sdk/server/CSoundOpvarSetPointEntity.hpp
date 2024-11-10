#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CSoundOpvarSetPointBase.hpp"
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
    // Size: 0x688
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CSoundOpvarSetPointEntity : public server::CSoundOpvarSetPointBase
    {
    public:
        entity2::CEntityIOOutput m_OnEnter; // 0x578        
        entity2::CEntityIOOutput m_OnExit; // 0x5a0        
        bool m_bAutoDisable; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5c9[0x43]; // 0x5c9
        float m_flDistanceMin; // 0x60c        
        float m_flDistanceMax; // 0x610        
        float m_flDistanceMapMin; // 0x614        
        float m_flDistanceMapMax; // 0x618        
        float m_flOcclusionRadius; // 0x61c        
        float m_flOcclusionMin; // 0x620        
        float m_flOcclusionMax; // 0x624        
        float m_flValSetOnDisable; // 0x628        
        bool m_bSetValueOnDisable; // 0x62c        
        bool m_bReloading; // 0x62d        
        [[maybe_unused]] std::uint8_t pad_0x62e[0x2]; // 0x62e
        int32_t m_nSimulationMode; // 0x630        
        int32_t m_nVisibilitySamples; // 0x634        
        Vector m_vDynamicProxyPoint; // 0x638        
        float m_flDynamicMaximumOcclusion; // 0x644        
        CEntityHandle m_hDynamicEntity; // 0x648        
        [[maybe_unused]] std::uint8_t pad_0x64c[0x4]; // 0x64c
        CUtlSymbolLarge m_iszDynamicEntityName; // 0x650        
        float m_flPathingDistanceNormFactor; // 0x658        
        Vector m_vPathingSourcePos; // 0x65c        
        Vector m_vPathingListenerPos; // 0x668        
        Vector m_vPathingDirection; // 0x674        
        int32_t m_nPathingSourceIndex; // 0x680        
        [[maybe_unused]] std::uint8_t pad_0x684[0x4];
        
        // Datamap fields:
        // void InputSetDisabledValue; // 0x0
        // void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetPointEntity) == 0x688);
};
