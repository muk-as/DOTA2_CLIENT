#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDotaMoveSpeedModifierPath;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9c8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerDotaPath : public source2sdk::server::CBaseTrigger
        {
        public:
            // m_path has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDotaMoveSpeedModifierPath> m_path;
            char m_path[0x4]; // 0x9c0            
            uint8_t _pad09c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerDotaPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerDotaPath) == 0x9c8);
    };
};
