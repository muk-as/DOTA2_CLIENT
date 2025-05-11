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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct EntityIOConnectionData_t
        {
        public:
            CUtlString m_outputName; // 0x0            
            std::uint32_t m_targetType; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            CUtlString m_targetName; // 0x10            
            CUtlString m_inputName; // 0x18            
            CUtlString m_overrideParam; // 0x20            
            float m_flDelay; // 0x28            
            std::int32_t m_nTimesToFire; // 0x2c            
            KeyValues3 m_paramMap; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_outputName) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_targetType) == 0x8);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_targetName) == 0x10);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_inputName) == 0x18);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_overrideParam) == 0x20);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_flDelay) == 0x28);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_nTimesToFire) == 0x2c);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_paramMap) == 0x30);
        
        static_assert(sizeof(source2sdk::worldrenderer::EntityIOConnectionData_t) == 0x40);
    };
};
