#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CFlexOp.hpp"

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
        class CFlexRule
        {
        public:
            std::int32_t m_nFlex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_FlexOps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CFlexOp> m_FlexOps;
            char m_FlexOps[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CFlexRule, m_nFlex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFlexRule, m_FlexOps) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CFlexRule) == 0x_);
    };
};
