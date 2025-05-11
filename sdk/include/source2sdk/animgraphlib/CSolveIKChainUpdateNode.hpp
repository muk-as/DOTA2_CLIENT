#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CSolveIKTargetHandle_t.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/SolveIKChainPoseOpFixedSettings_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSolveIKChainUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            // m_targetHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CSolveIKTargetHandle_t> m_targetHandles;
            char m_targetHandles[0x18]; // 0x70            
            source2sdk::animgraphlib::SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x88            
            uint8_t _pad00a0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSolveIKChainUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSolveIKChainUpdateNode) == 0xa8);
    };
};
