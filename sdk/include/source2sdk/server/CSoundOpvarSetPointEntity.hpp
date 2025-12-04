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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetPointEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnEnter; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnExit; // 0x_            
            bool m_bAutoDisable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDistanceMin; // 0x_            
            float m_flDistanceMax; // 0x_            
            float m_flDistanceMapMin; // 0x_            
            float m_flDistanceMapMax; // 0x_            
            float m_flOcclusionRadius; // 0x_            
            float m_flOcclusionMin; // 0x_            
            float m_flOcclusionMax; // 0x_            
            float m_flValSetOnDisable; // 0x_            
            bool m_bSetValueOnDisable; // 0x_            
            bool m_bReloading; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nSimulationMode; // 0x_            
            std::int32_t m_nVisibilitySamples; // 0x_            
            Vector m_vDynamicProxyPoint; // 0x_            
            float m_flDynamicMaximumOcclusion; // 0x_            
            CEntityHandle m_hDynamicEntity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszDynamicEntityName; // 0x_            
            float m_flPathingDistanceNormFactor; // 0x_            
            Vector m_vPathingSourcePos; // 0x_            
            Vector m_vPathingListenerPos; // 0x_            
            Vector m_vPathingDirection; // 0x_            
            std::int32_t m_nPathingSourceIndex; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputSetDisabledValue; // 0x_
            // void CSoundOpvarSetPointEntitySetOpvarThink; // 0x_
            // float InputSetDistanceMapMin; // 0x_
            // float InputSetDistanceMapMax; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointEntity) == 0x_);
    };
};
