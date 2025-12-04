#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CBoneConstraintBase.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBoneConstraintRbf : public source2sdk::modellib::CBoneConstraintBase
        {
        public:
            // m_inputBones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std_pair<CUtlString,std::uint32_t>> m_inputBones;
            char m_inputBones[0x_]; // 0x_            
            // m_outputBones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std_pair<CUtlString,std::uint32_t>> m_outputBones;
            char m_outputBones[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBoneConstraintRbf because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CBoneConstraintRbf) == 0x_);
    };
};
