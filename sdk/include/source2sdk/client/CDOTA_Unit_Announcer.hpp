#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnnouncerDescriptor.hpp"
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"

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
        // Size: 0x1a30
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Announcer : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            source2sdk::client::CAnnouncerDescriptor m_currentAnnouncer; // 0x1a00            
            uint8_t _pad1a28[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Announcer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Unit_Announcer) == 0x1a30);
    };
};
