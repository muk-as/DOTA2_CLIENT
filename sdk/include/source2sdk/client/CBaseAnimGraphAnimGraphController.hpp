#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc8
        // Has VTable
        #pragma pack(push, 1)
        class CBaseAnimGraphAnimGraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_sDestructiblePartDestroyedHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sDestructiblePartDestroyedHitGroup;
            char m_sDestructiblePartDestroyedHitGroup[0x28]; // 0x80            
            // m_nDestructiblePartDestroyedPartIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<std::int32_t> m_nDestructiblePartDestroyedPartIndex;
            char m_nDestructiblePartDestroyedPartIndex[0x20]; // 0xa8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraphAnimGraphController) == 0xc8);
    };
};
