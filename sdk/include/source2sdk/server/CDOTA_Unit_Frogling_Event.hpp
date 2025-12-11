#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Hero;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Frogling_Event : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            // m_hHeroHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Hero> m_hHeroHandle;
            char m_hHeroHandle[0x_]; // 0x_            
            std::int32_t m_nFroglingIndex; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Frogling_Event because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Frogling_Event) == 0x_);
    };
};
