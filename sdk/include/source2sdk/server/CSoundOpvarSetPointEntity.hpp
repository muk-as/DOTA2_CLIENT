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
        // Size: 0x680
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetPointEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnEnter; // 0x570            
            source2sdk::entity2::CEntityIOOutput m_OnExit; // 0x598            
            bool m_bAutoDisable; // 0x5c0            
            uint8_t _pad05c1[0x43]; // 0x5c1
            float m_flDistanceMin; // 0x604            
            float m_flDistanceMax; // 0x608            
            float m_flDistanceMapMin; // 0x60c            
            float m_flDistanceMapMax; // 0x610            
            float m_flOcclusionRadius; // 0x614            
            float m_flOcclusionMin; // 0x618            
            float m_flOcclusionMax; // 0x61c            
            float m_flValSetOnDisable; // 0x620            
            bool m_bSetValueOnDisable; // 0x624            
            bool m_bReloading; // 0x625            
            uint8_t _pad0626[0x2]; // 0x626
            std::int32_t m_nSimulationMode; // 0x628            
            std::int32_t m_nVisibilitySamples; // 0x62c            
            Vector m_vDynamicProxyPoint; // 0x630            
            float m_flDynamicMaximumOcclusion; // 0x63c            
            CEntityHandle m_hDynamicEntity; // 0x640            
            uint8_t _pad0644[0x4]; // 0x644
            CUtlSymbolLarge m_iszDynamicEntityName; // 0x648            
            float m_flPathingDistanceNormFactor; // 0x650            
            Vector m_vPathingSourcePos; // 0x654            
            Vector m_vPathingListenerPos; // 0x660            
            Vector m_vPathingDirection; // 0x66c            
            std::int32_t m_nPathingSourceIndex; // 0x678            
            uint8_t _pad067c[0x4];
            
            // Datamap fields:
            // void InputSetDisabledValue; // 0x0
            // void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointEntity) == 0x680);
    };
};
