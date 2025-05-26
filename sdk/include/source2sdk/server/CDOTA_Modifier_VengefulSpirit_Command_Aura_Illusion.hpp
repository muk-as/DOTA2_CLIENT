#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invulnerable.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VengefulSpirit_Command_Aura_Illusion : public source2sdk::server::CDOTA_Modifier_Invulnerable
        {
        public:
            // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hTarget;
            char hTarget[0x4]; // 0x1878            
            uint8_t _pad187c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VengefulSpirit_Command_Aura_Illusion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_VengefulSpirit_Command_Aura_Illusion) == 0x1880);
    };
};
