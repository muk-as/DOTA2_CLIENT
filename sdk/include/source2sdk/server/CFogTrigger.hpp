#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/fogparams_t.hpp"

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
        #pragma pack(push, 1)
        class CFogTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNotSaved
            source2sdk::server::fogparams_t m_fog; // 0x_            
            
            // Datamap fields:
            // Color m_fog.colorPrimary; // 0x_
            // Color m_fog.colorSecondary; // 0x_
            // Vector m_fog.dirPrimary; // 0x_
            // bool m_fog.enable; // 0x_
            // bool m_fog.blend; // 0x_
            // float m_fog.start; // 0x_
            // float m_fog.end; // 0x_
            // float m_fog.farz; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFogTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFogTrigger) == 0x_);
    };
};
