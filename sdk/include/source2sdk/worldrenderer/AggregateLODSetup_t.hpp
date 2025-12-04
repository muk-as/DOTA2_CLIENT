#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AggregateLODSetup_t
        {
        public:
            Vector m_vLODOrigin; // 0x_            
            float m_fMaxObjectScale; // 0x_            
            // m_fSwitchDistances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_fSwitchDistances;
            char m_fSwitchDistances[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::AggregateLODSetup_t, m_vLODOrigin) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateLODSetup_t, m_fMaxObjectScale) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateLODSetup_t, m_fSwitchDistances) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::AggregateLODSetup_t) == 0x_);
    };
};
