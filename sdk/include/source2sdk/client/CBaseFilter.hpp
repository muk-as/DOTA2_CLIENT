#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CLogicalEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x640
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseFilter : public source2sdk::client::CLogicalEntity
        {
        public:
            bool m_bNegated; // 0x5e8            
            uint8_t _pad05e9[0x7]; // 0x5e9
            source2sdk::entity2::CEntityIOOutput m_OnPass; // 0x5f0            
            source2sdk::entity2::CEntityIOOutput m_OnFail; // 0x618            
            
            // Datamap fields:
            // void InputTestActivator; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseFilter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseFilter) == 0x640);
    };
};
