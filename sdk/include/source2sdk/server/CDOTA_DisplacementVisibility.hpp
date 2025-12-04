#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // static metadata: MNetworkVarNames "int m_HiddenDisplacement"
        #pragma pack(push, 1)
        class CDOTA_DisplacementVisibility : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_HiddenDisplacement; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // int32_t InputHideDisplacement; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DisplacementVisibility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_DisplacementVisibility) == 0x_);
    };
};
