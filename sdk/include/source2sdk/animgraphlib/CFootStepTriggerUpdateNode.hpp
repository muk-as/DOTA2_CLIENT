#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FootStepTrigger.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFootStepTriggerUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            // m_triggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::FootStepTrigger> m_triggers;
            char m_triggers[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTolerance; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootStepTriggerUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootStepTriggerUpdateNode) == 0x_);
    };
};
