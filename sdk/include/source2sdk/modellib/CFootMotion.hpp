#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CFootStride.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFootMotion
        {
        public:
            // m_strides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CFootStride> m_strides;
            char m_strides[0x18]; // 0x0            
            CUtlString m_name; // 0x18            
            bool m_bAdditive; // 0x20            
            uint8_t _pad0021[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CFootMotion, m_strides) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CFootMotion, m_name) == 0x18);
        static_assert(offsetof(source2sdk::modellib::CFootMotion, m_bAdditive) == 0x20);
        
        static_assert(sizeof(source2sdk::modellib::CFootMotion) == 0x28);
    };
};
