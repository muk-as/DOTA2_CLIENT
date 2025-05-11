#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/CMotionGraph.hpp"

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
        // Size: 0x68
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionGraphUpdateNode : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            // m_pMotionGraph has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CMotionGraph> m_pMotionGraph;
            char m_pMotionGraph[0x8]; // 0x58            
            uint8_t _pad0060[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMotionGraphUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionGraphUpdateNode) == 0x68);
    };
};
