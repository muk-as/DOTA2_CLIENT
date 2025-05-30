#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"

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
        // Size: 0x80
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSingleFrameUpdateNode : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            // m_actions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CAnimActionUpdater>> m_actions;
            char m_actions[0x18]; // 0x58            
            source2sdk::animgraphlib::CPoseHandle m_hPoseCacheHandle; // 0x70            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x74            
            float m_flCycle; // 0x78            
            uint8_t _pad007c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSingleFrameUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSingleFrameUpdateNode) == 0x80);
    };
};
