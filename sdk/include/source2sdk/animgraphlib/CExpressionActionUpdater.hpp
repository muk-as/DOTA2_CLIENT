#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/AnimParamType_t.hpp"
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/modellib/AnimScriptHandle.hpp"

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
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CExpressionActionUpdater : public source2sdk::animgraphlib::CAnimActionUpdater
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_hParam; // 0x18            
            source2sdk::animationsystem::AnimParamType_t m_eParamType; // 0x1a            
            uint8_t _pad001b[0x1]; // 0x1b
            source2sdk::modellib::AnimScriptHandle m_hScript; // 0x1c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CExpressionActionUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CExpressionActionUpdater) == 0x20);
    };
};
