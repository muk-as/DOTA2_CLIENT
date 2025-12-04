#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "Color m_fadeColor"
        #pragma pack(push, 1)
        class CEnvFade : public source2sdk::server::CLogicalEntity
        {
        public:
            // metadata: MNetworkEnable
            Color m_fadeColor; // 0x_            
            float m_Duration; // 0x_            
            float m_HoldDuration; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnBeginFade; // 0x_            
            
            // Datamap fields:
            // void InputFade; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvFade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvFade) == 0x_);
    };
};
