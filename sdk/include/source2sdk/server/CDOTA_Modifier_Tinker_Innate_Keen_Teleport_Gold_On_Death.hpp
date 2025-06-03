#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1878
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tinker_Innate_Keen_Teleport_Gold_On_Death : public source2sdk::client::CDOTA_Buff
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tinker_Innate_Keen_Teleport_Gold_On_Death) == 0x1878);
    };
};
