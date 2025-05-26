#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invoker_Instance.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_WexInstance : public source2sdk::server::CDOTA_Modifier_Invoker_Instance
        {
        public:
            float move_speed_per_instance; // 0x1878            
            std::int32_t attack_speed_per_instance; // 0x187c            
            char* m_pSlotName; // 0x1880            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_WexInstance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_WexInstance) == 0x1888);
    };
};
