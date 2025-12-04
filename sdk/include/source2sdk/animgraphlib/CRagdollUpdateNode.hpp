#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/RagdollPoseControl.hpp"

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
        class CRagdollUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            std::int32_t m_nWeightListIndex; // 0x_            
            source2sdk::animgraphlib::RagdollPoseControl m_poseControlMethod; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CRagdollUpdateNode) == 0x_);
    };
};
