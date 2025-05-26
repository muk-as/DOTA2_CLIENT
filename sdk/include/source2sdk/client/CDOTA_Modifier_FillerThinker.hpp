#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_FillerThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // hCasterList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hCasterList;
            char hCasterList[0x18]; // 0x1878            
            bool bStarted; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            std::int32_t nCount; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_FillerThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_FillerThinker) == 0x1898);
    };
};
