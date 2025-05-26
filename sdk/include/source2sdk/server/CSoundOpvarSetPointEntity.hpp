#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CSoundOpvarSetPointBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x698
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetPointEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnEnter; // 0x588            
            source2sdk::entity2::CEntityIOOutput m_OnExit; // 0x5b0            
            bool m_bAutoDisable; // 0x5d8            
            uint8_t _pad05d9[0x43]; // 0x5d9
            float m_flDistanceMin; // 0x61c            
            float m_flDistanceMax; // 0x620            
            float m_flDistanceMapMin; // 0x624            
            float m_flDistanceMapMax; // 0x628            
            float m_flOcclusionRadius; // 0x62c            
            float m_flOcclusionMin; // 0x630            
            float m_flOcclusionMax; // 0x634            
            float m_flValSetOnDisable; // 0x638            
            bool m_bSetValueOnDisable; // 0x63c            
            bool m_bReloading; // 0x63d            
            uint8_t _pad063e[0x2]; // 0x63e
            std::int32_t m_nSimulationMode; // 0x640            
            std::int32_t m_nVisibilitySamples; // 0x644            
            Vector m_vDynamicProxyPoint; // 0x648            
            float m_flDynamicMaximumOcclusion; // 0x654            
            CEntityHandle m_hDynamicEntity; // 0x658            
            uint8_t _pad065c[0x4]; // 0x65c
            CUtlSymbolLarge m_iszDynamicEntityName; // 0x660            
            float m_flPathingDistanceNormFactor; // 0x668            
            Vector m_vPathingSourcePos; // 0x66c            
            Vector m_vPathingListenerPos; // 0x678            
            Vector m_vPathingDirection; // 0x684            
            std::int32_t m_nPathingSourceIndex; // 0x690            
            uint8_t _pad0694[0x4];
            
            // Datamap fields:
            // void InputSetDisabledValue; // 0x0
            // void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
            // float InputSetDistanceMapMin; // 0x0
            // float InputSetDistanceMapMax; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointEntity) == 0x698);
    };
};
