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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimReplayFrame
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_inputDataBlocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlBinaryBlock> m_inputDataBlocks;
            char m_inputDataBlocks[0x_]; // 0x_            
            CUtlBinaryBlock m_instanceData; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_startingLocalToWorldTransform; // 0x_            
            CTransform m_localToWorldTransform; // 0x_            
            float m_timeStamp; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_inputDataBlocks) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_instanceData) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_startingLocalToWorldTransform) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_localToWorldTransform) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimReplayFrame, m_timeStamp) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimReplayFrame) == 0x_);
    };
};
