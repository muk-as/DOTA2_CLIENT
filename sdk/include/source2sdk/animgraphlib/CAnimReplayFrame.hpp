#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x90
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimReplayFrame
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_inputDataBlocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlBinaryBlock> m_inputDataBlocks;
            char m_inputDataBlocks[0x18]; // 0x10            
            CUtlBinaryBlock m_instanceData; // 0x28            
            CTransform m_startingLocalToWorldTransform; // 0x40            
            CTransform m_localToWorldTransform; // 0x60            
            float m_timeStamp; // 0x80            
            uint8_t _pad0084[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_inputDataBlocks) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_instanceData) == 0x28);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_startingLocalToWorldTransform) == 0x40);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_localToWorldTransform) == 0x60);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_timeStamp) == 0x80);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimReplayFrame) == 0x90);
    };
};
