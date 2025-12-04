#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFlexController
        {
        public:
            CUtlString m_szName; // 0x_            
            CUtlString m_szType; // 0x_            
            float min; // 0x_            
            float max; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CFlexController, m_szName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFlexController, m_szType) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFlexController, min) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFlexController, max) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CFlexController) == 0x_);
    };
};
