#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticleControlPointDriver_t.hpp"
#include "source2sdk/particles/ParticlePreviewState_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParticleControlPointConfiguration_t
        {
        public:
            CUtlString m_name; // 0x_            
            // m_drivers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::particles::ParticleControlPointDriver_t> m_drivers;
            char m_drivers[0x_]; // 0x_            
            source2sdk::particles::ParticlePreviewState_t m_previewState; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::ParticleControlPointConfiguration_t, m_name) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointConfiguration_t, m_drivers) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointConfiguration_t, m_previewState) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::ParticleControlPointConfiguration_t) == 0x_);
    };
};
