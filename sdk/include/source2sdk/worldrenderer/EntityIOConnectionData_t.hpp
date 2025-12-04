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
        struct EntityIOConnectionData_t
        {
        public:
            CUtlString m_outputName; // 0x_            
            std::uint32_t m_targetType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_targetName; // 0x_            
            CUtlString m_inputName; // 0x_            
            CUtlString m_overrideParam; // 0x_            
            float m_flDelay; // 0x_            
            std::int32_t m_nTimesToFire; // 0x_            
            KeyValues3 m_paramMap; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_outputName) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_targetType) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_targetName) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_inputName) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_overrideParam) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_flDelay) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_nTimesToFire) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::EntityIOConnectionData_t, m_paramMap) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::EntityIOConnectionData_t) == 0x_);
    };
};
